#include<iostream>
using namespace std;

int main()
{
int a, b, prime, count;
while ( cin >> a >> b ) {
count = 0;
for ( int i = a; i <= b; i++ ) {
prime = 1;
for ( int j = 2; j * j <= i; j++ ) {
if ( i % j == 0 ) {
prime = 0;
break;
}
}
if ( prime == true && i != 1 )
count++;
}
cout << count << endl;
}
return 0;
}
