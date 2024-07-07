#include <stdio.h>
int main(){
	int i = 0, t = 0, n = 0;
	int cnt = 0, m = 0, s = 1;
	scanf("%d", &t);
	for(i = 0; i < t; i++){
		scanf("%d", &n);
		m = n;
		cnt = 0;
		s = 1;
		while(m > 0){
			if(m % 10 != 0)
				cnt = cnt + 1;
			m = m / 10;
		}
		printf("%d\n", cnt);
		while (n > 0){
			if(n % 10 != 0)
				printf("%d ", (n % 10) * s);
			n = n / 10;
			s = s * 10;	
		}
	}
	return 0;
	
}