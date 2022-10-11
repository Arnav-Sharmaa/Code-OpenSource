// Check for prime (Check for only upto root N)

bool isprime(ll N){
	if(N==1)
	return false;
	for(ll i=2;i*i<=N;i++)
	{
		if(N%i==0)
		return false;
	}
	return true;
}

Divisors -

// Find all factors/divisors of N - O(rootN)

for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			cout<<i<<"\n";
			if((n/i)!=i)
			cout<<n/i<<"\n";
		}
	}

Sieve - Finds all the prime numbers from 1 to N - O(NloglogN)

Pseudo code -

1. Mark all the numbers as prime numbers except 1.
2. Traverse over each prime number smaller than or equal to sqrt(N).
3. For each prime number, mark its multiples as composite numbers.
4. Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.

ll sievesize=1e8;
bool sieve[sievesize+1];
void createSieve(){
	for(ll i=2;i<=sievesize;i++)
	sieve[i]=true;
	sieve[0]=false;
	sieve[1]=false;
	
	for(ll i=2;i*i<=sievesize;i++){
		if(sieve[i])
		for(ll j=i*i;j<=sievesize;j+=i)
		sieve[j]=false;
	}
}

// Inside main, max array size can be 1e6 and outside it is 1e7. For bool, inside it is 1e7 and for outside it is 1e8.

Prime Factors -

// There can be maximum one prime factor of any number which is greater than rootN.

Print all prime factors of n - O(sqrtN)

for(ll i=2;i*i<=n;i++){
		while(n%i==0){
			cout<<i<<"\n";
			n=n/i;
		}
	}
	if(n>1)
	cout<<n<<"\n";

Print all prime factors of all numbers from 2 to N.

Pseudo Code -

1. Make spf array which stores the smallest prime factor of every number using sieve.
2. In logN, for given N, print that smallest prime factor and go to n/spf[i].

ll sievesize=1e7;
ll spf[sievesize+1];
void createSieve(){
	for(ll i=1;i<=sievesize;i++)
	spf[i]=i;
	
	for(ll i=2;i*i<=sievesize;i++){
		if(spf[i]==i)
		for(ll j=i*i;j<=sievesize;j+=i)
		if(spf[j]==j)
		spf[j]=i;
	}
}

int main(){
	createSieve();
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		while(n!=1){
			cout<<spf[n]<<" ";
			n=n/spf[n];
		}
		cout<<"\n";
	}
}

Segmented Sieve - If we have to find primes in the range [l,r], but r is very large around 1e12, so we cant store such huge size, so cant use sieve. 
If r-l+1 is around 1e6, we can store it. So we use segmented sieve.

Pseudo Code -

1. Find all the prime number upto root r.
2. Create the dummy array to store primes in range [l,r].
3. For each prime number found in step 1, mark its multiples as composite numbers which lie in our [l,r] range.
4. Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.

ll sievesize=1e7;
vector<bool> sieve(sievesize+1,true);
void createSieve(){
	sieve[0]=false;
	sieve[1]=false;
	
	for(ll i=2;i*i<=sievesize;i++){
		if(sieve[i])
		for(ll j=i*i;j<=sievesize;j+=i)
		sieve[j]=false;
	}
}

vector<ll> generatePrimes(ll N){
	vector<ll> ds;
	for(ll i=2;i<=N;i++)
	if(sieve[i])
	ds.push_back(i);
	return ds;
}

int main(){
	createSieve();
	ll l,r;
	cin>>l>>r;
	vector<ll> primes=generatePrimes(sqrt(r));
	
	vector<bool> dummy(r-l+1,true);
	
	for(auto pr:primes){
		ll firstMultiple=(l/pr)*pr;
		if(firstMultiple<l)
		firstMultiple+=pr;
		
		for(ll j=max(firstMultiple,pr*pr);j<=r;j+=pr)
		dummy[j-l]=false;
	}
	
	for(ll i=l;i<=r;i++)
	if(dummy[i-l])
	cout<<i<<" ";
}
















