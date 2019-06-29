// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `30
384 8895
1725 9791
170 1024
4 11105
2 6
578 1815
702 3352
143 5141
1420 6980
24 1602
849 999
76 7586
85 5570
444 4991
719 11090
470 10708
1137 4547
455 9003
110 9901
15 8578
368 3692
104 1286
3 4
366 12143
7 6649
610 2374
152 7324
4 7042
292 11386
334 5720`

const n = Number(stdin.split('\n')[0])
const [, ..._ab] = stdin.split('\n')
const ab = _ab.map(e => e.split(' ').map(Number))

const ans = () => {
  const sab = ab.sort((a, b) => a[1] - b[1])

  let t = 0
  for (let i = 0; i < n; i++) {
    const [a, b] = sab[i]

    t += a

    if (t > b) {
      return 'No'
    }
  }
  return 'Yes'
}

console.log(ans())
