# AtCoder 用のシェル設定。~/.zshrc に次の 1 行を書いて読み込む:
#   source ~/Documents/atcoder/atcoder.zsh
#
# 入るもの
#   - PATH に ~/.local/bin (oj, cptest, cptestfloat, cpsubmit, atcoder-session)
#   - atc: コンテストのフォルダへ移動する関数 (無ければ acc new で作る)
#
# 使い方
#   atc            → ~/Documents/atcoder
#   atc 480        → abc/abc480   (無ければ acc new abc480 してから移動)
#   atc 480 c      → abc/abc480/c
#   atc arc200 b   → arc/arc200/b
#   atc ahc050     → ahc/ahc050

typeset -U path
path=("$HOME/.local/bin" $path)

ATCODER_ROOT="$HOME/Documents/atcoder"

atc() {
  local root="$ATCODER_ROOT"
  if [[ $# -eq 0 ]]; then
    cd "$root"
    return
  fi

  # 数字だけなら abc とみなす。それ以外 (arc200 など) はそのまま
  local contest=$1
  [[ $contest == <-> ]] && contest="abc$contest"
  local kind="${contest%%[0-9]*}"   # abc480 → abc
  if [[ -z $kind || $kind == $contest ]]; then
    echo "atc: コンテスト名が分かりません: $1 (例: 480, abc480, arc200)" >&2
    return 1
  fi

  local dir="$root/$kind/$contest"
  if [[ ! -d $dir ]]; then
    echo "atc: $kind/$contest が無いので acc new で作ります"
    mkdir -p "$root/$kind" || return 1
    ( cd "$root/$kind" && acc new "$contest" ) || return 1
    [[ -d $dir ]] || { echo "atc: 作れませんでした: $dir" >&2; return 1; }
  fi

  if [[ $# -ge 2 ]]; then
    local task="${2:l}"            # A → a
    if [[ -d "$dir/$task" ]]; then
      dir="$dir/$task"
    else
      echo "atc: 問題 $task のフォルダがありません (あるもの: $(ls "$dir" | grep -v '\.json$' | tr '\n' ' '))" >&2
      return 1
    fi
  fi
  cd "$dir"
}
