// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `-100 0`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

let res = Math.max(a-b, a*b, a+b)

if(res === 0)res = 0

console.log(res)
