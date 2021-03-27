// https://github.com/SuprDewd/CompetitiveProgramming/blob/master/code/mathematics/is_prime.cpp
bool is_prime(int n) {
  if (n < 2) return false;
  if (n < 4) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  if (n < 25) return true;
  for (int i = 5; i*i <= n; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;
  return true; 
}
