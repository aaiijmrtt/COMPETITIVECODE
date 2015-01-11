import java.util.Vector;
public class Euler {
	public boolean prime[];
	public long factorial[];
	public boolean prime(long number)	{
		if(number%2==0)
			return false;
		for(long i=3;i*i<=number;i+=2)
			if(number%i==0)
				return false;
		return true;
	}	//returns true iff number is prime
	public boolean palindrome(long number,long base)	{
		long reverse=0,temporary=number;
		while(temporary!=0)	{
			reverse=reverse*base+temporary%base;
			temporary/=base;
		}
		return reverse==number;
	}	//returns true iff number is palindromic to the base base
	public boolean perfect(long number)	{
		return sumofproperdivisors(number)==number;
	}	//returns true iff number is perfect
	public boolean amicable(long number)	{
		return (sumofproperdivisors(sumofproperdivisors(number))==number)&&(!perfect(number));
	}	//returns true iff number is a part of an amicable pair
	public boolean abundant(long number) {
		return sumofproperdivisors(number)>number;
	}
	public boolean sumofdigitspowers(long number,long power)	{
		long temporary=number,sum=0;
		for(;temporary!=0;temporary/=10)
			sum+=Math.pow(temporary%10,power);
		return sum==number;
	}	//returns true iff number can be expressed as the sum of the powerth powers of its digits
	public boolean sumofdigitsfactorials(long number)	{
		long temporary=number,sum=0;
		for(;temporary!=0;temporary/=10)
			sum+=factorial[(int)temporary%10];
		return sum==number;
	}	//returns true iff number can be expressed as the sum of the factorials of its digits
	public boolean permutations(long one,long two)	{
		byte digitsinone[]=new byte[10],digitsintwo[]=new byte[10];
		while(one!=0)	{
			digitsinone[(int)(one%10)]++;
			one/=10;
		}
		while(two!=0)	{
			digitsintwo[(int)(two%10)]++;
			two/=10;
		}
		for(byte i=0;i<10;++i)
			if(digitsinone[i]!=digitsintwo[i])
				return false;
		return true;
	}	//returns true iff one is a permutation of the digits of two
	public boolean permutations(long numbers[])	{
		long digitsinnumbers[][]=new long[numbers.length][10];
		int i,j;
		for(i=0;i<numbers.length;++i)
			while(numbers[i]!=0)	{
				digitsinnumbers[i][(int)(numbers[i]%10)]++;
				numbers[i]/=10;
		}
		for(i=0;i<10;++i)
			for(j=0;j+1<numbers.length;++j)
				if(digitsinnumbers[j][i]!=digitsinnumbers[j+1][i])
					return false;
		return true;
	}	//returns true iff the numbers are permutations of each other
	public long gcd(long one,long two)	{
		for(long i=1;i<one;++i)
			if(one%i==0&&(two*i)%one==0)
				return one/i;
		return 1;
	}	//returns the greatest common divisor of one and two(>one)
	public long hcf(long one,long two)	{
		long temporary;
		while(two%one!=0)	{
			temporary=one;
			one=two%one;
			two=temporary;
		}
		return one;
	}	//returns the highest common factor of one and two(>one)
	public boolean[] primesieve(int number)	{
		boolean prime[]=new boolean[number];
		for(int i=2;i<number;++i)
			prime[i]=true;
		for(int i=2;i<number;++i)
			if(prime[i])
				for(int j=2;i*j<number;++j)
					prime[i*j]=false;
		return prime;
	}	//returns an array, each element true iff its index is prime
	public long numberofdivisors(long number)	{
		long divisors=1,factor=2,factorcount=0;
		while(number%factor==0)	{
			number/=factor;
			divisors++;
		}
		factor++;
		while(number!=1)	{
			factorcount=0;
			while(number%factor==0)	{
				number/=factor;
				factorcount++;
			}
			factor+=2;
			divisors*=factorcount+1;
		}
		return divisors;
	}	//returns the number of divisors of number
	public long numberofprimefactors(long number)	{
		long factorcount=0,factor=2;
		if(number%factor==0)	{
			factorcount++;
			while(number%factor==0)
				number/=factor;
		}
		factor++;
		while(number!=1)	{
			if(number%factor==0)	{
				factorcount++;
				while(number%factor==0)
					number/=factor;
			}
			factor+=2;
		}
		return factorcount;
	}	//returns the number of prime factors of number
	public long sumofproperdivisors(long number)	{
		long sum=-number,i;
		for(i=1;i*i<number;++i)	{
			if(number%i==0)
				sum+=i+number/i;
		}
		if(i*i==number)
			sum+=i;
		return sum;
	}	//returns the sum of the proper divisors of number
	public long sequenceCollatz(long number)	{
		long sequence=1;
		for(sequence=1;number!=1;++sequence)
			number=number%2==0?number/2:(3*number+1);
		return sequence;
	}	//returns the length of the Collatz sequence of number (p14)
	public long longersequenceCollatz(long one,long two)	{
		long three=one,four=two;
		while(one!=1&&two!=1)	{
			one=one%2==0?one/2:(3*one+1);
			two=two%2==0?two/2:(3*two+1);
		}
		return one==1?four:three;
	}	//returns the number with the longer Collatz sequence
	public long numberofquadraticprimes(long one,long two)	{
		long primecount;
		for(primecount=0;primecount<two;++primecount)
			if(primecount*primecount+one*primecount+two<0||!prime(primecount*primecount+one*primecount+two))
				break;
		return primecount;
	}	//returns the number of consecutive primes produced by nonnegative values of n in quadratic n*n+one*n+two
	public long factorial(long number)	{
		long factorial=1;
		for(long i=2;i<number+1;++i)
			factorial*=i;
		return factorial;
	}	//returns the factorial of number
	public long numberofdigits(long number)	{
		long digits=0;
		for(;number!=0;++digits)
			number/=10;
		return digits;
	}	//returns the number of digits in number
	public long circulatedigits(long number)	{
		return (long)(number/10+Math.pow(10,numberofdigits(number)-1)*(number%10));
	}	//returns a step circulation of the digits in number
	public long Champernownesdigit(long number)	{
		long temporary,i;
		for(i=0;9*Math.pow(10,i)*(i+1)<number;++i)
			number-=9*Math.pow(10,i)*(i+1);
		temporary=(long)(Math.pow(10,i))+(number-1)/(i+1);
		number-=((number-1)/(i+1))*(i+1);
		return digitsfromleft(temporary,number,1);
	}	//returns the number-th digit in Champerownes comstant
	public boolean pandigital(long number)	{
		long digits=numberofdigits(number);
		boolean digit[]=new boolean[(int)(digits+1)];
		for(;number!=0;number/=10)
			if((number%10<digits+1))
				digit[(int)number%10]=true;
		for(int i=1;i<digits+1;++i)
			if(!digit[i])
				return false;
		return true;
	}	//returns true iff number is pandigital
	public long permutation(byte digits[],long permutator)	{
		Vector<Byte> permutators=new Vector<Byte>(digits.length);
		byte i,j;
		long permutation=0;
		for(i=0;i<digits.length;++i)
			permutators.add(digits[i]);
		for(i=(byte)(digits.length-1);i+1>0;--i)	{
			for(j=i;j>0;--j)
				if(j*factorial[i]<=permutator)
					break;
			permutator-=j*factorial[i];
			permutation=permutation*10+permutators.elementAt(j);
			permutators.remove(j);
		}
		return permutation;
	}	//returns the permutator-th permutation of the digits in digits
	public long digitsfromleft(long number,long index,long length)	{
		return (long)((number/Math.pow(10,numberofdigits(number)+1-(index+length)))%Math.pow(10,length));
	}	//returns length digits beginning at index from the left of number
	public long[] rootconvergent(long convergents[])	{
		long nextconvergents[]=new long[2],gcd;
		nextconvergents[0]=2*convergents[1]+convergents[0];
		nextconvergents[1]=convergents[1]+convergents[0];
		gcd=gcd(nextconvergents[1],nextconvergents[0]);
		nextconvergents[0]/=gcd;
		nextconvergents[0]/=gcd;
		return nextconvergents;
	}
	public long totient(long number)	{
		long totient=1,factor=2,temporary=number;
		if(temporary%factor==0)	{
			totient*=(number-number/factor);
			while(temporary%factor==0)
				temporary/=factor;
		}
		factor++;
		while(temporary!=1)	{
			if(temporary%factor==0)	{
				totient*=(number-number/factor);
				while(temporary%factor==0)
					temporary/=factor;
			}
			factor+=2;
			if(totient%number==0)	{
				totient/=number;
			}
		}
		return totient;
	}	//returns the Euler totient of number
	public long lasttendigitpower(long number,long base,long index)	{
		for(;index>1;--index)
			number=(number*base)%10000000000l;
		return number;
	}	//returns the last 10 digits of number*base^index
	public long sumofdigitpowers(long number,long power)	{
		long sum=0;
		for(;number!=0;number/=10)
			sum+=Math.pow(number%10,power);
		return sum;
	}	//returns true iff number can be expressed as the sum of the fifth powers of its digits
	public boolean squaredigitchain89(long number)	{
		while(true)	{
			if(number==89)
				return true;
			if(number==1)
				return false;
			number=sumofdigitpowers(number,2);
		}
	}
	public boolean greaterpower(long baseone,long indexone,long basetwo,long indextwo)	{
		double quotient=1;
		while(indexone>0&&indextwo>0)	{
			if(quotient>=1)	{
				quotient/=basetwo;
				indextwo--;
			}
			else if(quotient<1)	{
				quotient*=baseone;
				indexone--;
			}
		}
		if(indexone>0)	{
			if(quotient>1)
				return true;
			while(indexone>0)	{
				quotient*=baseone;
				indexone--;
				if(quotient>1)
					return true;
			}
			return false;
		}
		if(indextwo>0)	{
			if(quotient<1)
				return false;
			while(indextwo>0)	{
				quotient/=basetwo;
				indextwo--;
				if(quotient<1)
					return false;
			}
			return true;
		}
		return false;
	}	//returns true iff baseone raised to the indexoneth power is greater than basetwo raised to the indextwoth power
	public boolean bouncy(long number)	{
		byte digit=(byte)(number%10),difference=0;
		number/=10;
		while(number>0)	{
			if(difference*(number%10-digit)<0)
				return true;
			difference=(byte)(number%10-digit);
			digit=(byte)(number%10);
			number/=10;
		}
		return false;
	}	
}	/*	gcd is faster than hcf for Project Euler problem 5	*/
