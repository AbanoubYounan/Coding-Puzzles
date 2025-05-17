This is the solution for 598A-Tricky Sum:

link: https://codeforces.com/problemset/problem/598/A

# Problem Description:
In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.

For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.

Calculate the answer for t values of n.

Input
The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.

Each of next t lines contains a single integer n (1 ≤ n ≤ 109).

Output
Print the requested sum for each of t integers n given in the input.

# Thought Process:
1. Just think to loop over n and check if the number is something power of 2 and minus it, and if not add it.
The code:
    `
    long long n, sum=0;
    long long next_power_2 = 1;
    cin>>n;
    for(long long i = 1; i<=n; i++){
        if(i==next_power_2){
            sum-=i;
            next_power_2*=2;
        }else{
            sum+=i;
        }
    }
    cout<<sum<<endl;
    `
   
- Complexity analysis:
- It's a O(N) * t (test cases).
- N is (1 ≤ n ≤ 10^9), t (1 ≤ t ≤ 100), so in the worst case it will be 10^11 TLE for sure :( , I think we need more efficient solution.

2. We can get the sum from 1 to n in O(1) by: s = n·( n + 1) / 2; But the problem here we didn't minus the numbers powers of 2, but we can just do it by O(log(n)) by this:
    `
    long long pow_2=1;
    while(pow_2<=n){
        sum -= (2*pow_2);
        pow_2*=2;
    }
    `
But why I am minus 2*pow_2 not just pow_2, Because when we use this equation s = n·( n + 1) / 2; we have already add this number so we need to minus it, then minus it again to meet the condition of the problem.
