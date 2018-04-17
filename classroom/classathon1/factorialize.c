#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

long long factorialize(int num){
  if(num < 1){
      return 1;
  }
  return num * factorialize(num - 1);
}
// private function
int isPrime(int num)
{
 for(int i = 2; i < num; i++)
 {
     if(num % i == 0)
     {
         return false;
     }
 }
 return true;
}

int sumPrimes(int num)
{
   int sum = 0;
   for(int i = 2; i <= num; i++)
   {
       if(isPrime(i))
       {
           sum += i;
       }
   }
   return sum;
}

long long sumFibs(int num)
{
    int previousNum = 0;
    int currentNum = 1;
    int results = 0;
    while(currentNum <= num)
    {
        if( currentNum % 2 != 0)
        {
            results += currentNum;
        }
        currentNum += previousNum;
        previousNum = currentNum - previousNum;
    }
    return results;
}

int main(int argc, string argv[])
{
    while(argc != 2)
    {
        printf("function requires 1 command line argument");
    }

    printf("%lli\n",factorialize(atoi(argv[1])));
    printf("%i\n",sumPrimes(atoi(argv[1])));
     printf("%lli\n",sumFibs(atoi(argv[1])));

}