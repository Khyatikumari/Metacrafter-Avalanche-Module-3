const MOD = 1_000_000_007
const MAXN = 1000
var fact, invfact [MAXN+1]int

// precompute factorials and their modular inverse using
// the property: 1/(i-1)! = 1/i! * i
func init() {
	fact[0] = 1
	for i := 1; i <= MAXN; i++ {
		fact[i] = (fact[i-1] * i) % MOD
	}
	invfact[MAXN] = modinv(fact[MAXN])
	for i := MAXN; i > 0; i-- {
		invfact[i-1] = (invfact[i] * i) % MOD
	}
}

// modular multiplicative inverse
func modinv(n int) int {
	x, y, px, py := 0, 1, 1, 0
	m := MOD
	for m != 0 {
		q := n / m
		n, m = m, n%m
		px, x = x, px-q*x
		py, y = y, py-q*y
	}
	return px
}

// n choose r modulo MOD
func ncr(n, r int) int {
	num := fact[n]
	den := (invfact[r] * invfact[n-r]) % MOD
	return (num * den) % MOD
}

// in how many ways can I split n identical items into exactly
// k blocks, such that every block has at least 1 item and no
// block has more than limit items?
func splitways(n, k, limit int) int {
	total, flag, remaining := 0, 1, n
	for j := 0; j <= k && k <= remaining; j++ {
		term := ncr(k, j) * ncr(remaining-1, k-1)
		total = (total + flag*term + MOD*MOD) % MOD
		flag = -flag
		remaining -= limit
	}
	return total
}

func numberOfStableArrays(zero, one, limit int) (result int) {
	start := (min(zero, one)+limit-1)/limit // there are no valid choices below this value
	prev, curr, next := 0, splitways(one, start, limit), splitways(one, start+1, limit)
	for k := start; k <= zero; k++ {
		choices := (prev + 2*curr + next) * splitways(zero, k, limit)
		result = (result + choices) % MOD
		prev, curr, next = curr, next, splitways(one, k+2, limit)
	}
	return result
}