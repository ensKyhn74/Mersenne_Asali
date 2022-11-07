#include <stdio.h>
#include <math.h>
// klavyeden girilen sayı Mersenne Asalı mı?
// Mersenne Asalı: n asal ise 2^n - 1 de asal ise o sayı mersenne asalıdır
// n=2 için 2^2 - 1 = 3 (3 Mersenne Asalı)
// n=3 için 2^3 - 1 = 7 (7 Mersenne Asalı)
// n=5 için 2^5 - 1 = 31 (31 Mersenne Asalı)
// n=7 için 2^7 - 1 = 127 (127 Mersenne Asalı)
// n=11 için 2^11 - 1 = 2047 (2047 Mersenne Asalı DEĞİL çünkü 2047=23*89)

int main() 

{
 
  int i,n;
  int AsalKontrol = 0;
  
  printf("asal sayi girin: ");
  scanf("%d",&n);
  
  if(n < 2)
  {
   printf("2'den kucuk sayi girilemez!!!");
  }
  
  else
  {
   for(i = 2 ; i < n ; i++) // n asal mı diye kontrol eder
   {
     if(n % i == 0)  
     {
       AsalKontrol = 1; // n asal değil
       break;
     }
   }
   
   if(AsalKontrol == 1)
   {
    printf("%d asal degil!",n);
   }
   
    else // n asal ise...
    {
      int sayi = pow(2,n) - 1;
      int MersenneAsalKontrol = 0;
      
      for(i = 2 ; i < sayi ; i++)
      {
       if(sayi % i == 0)
       {
        MersenneAsalKontrol = 1;
        break;
       }
      }
        
      if(MersenneAsalKontrol == 1)
      {
       printf("%d Mersenne Asali degil!",sayi);
      }
      
      else
      {
       printf("%d Mersenne Asalidir",sayi);
      }
    } 
  }
  
  return 0;

}