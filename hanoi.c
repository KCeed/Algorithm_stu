#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

int main() {
	int t_case;
	scanf("%d", &t_case);

	while (t_case != 0) {
		int stick, num, cur_stick;
		int f[50] = { 0 }, temp;
		f[0] = 1;
		scanf("%d", &stick);
		for (num = 2 ;; num++) {
			for (cur_stick = 0; cur_stick < stick; cur_stick++) {
				temp = f[cur_stick] + num;
				temp = (int)sqrt(temp);
				if ((temp*temp) == f[cur_stick] + num || f[cur_stick] == 0) {
					f[cur_stick] = num;
					break;
				}
			}
			if (cur_stick == stick) break;
		}
		t_case = t_case - 1;
		printf("Çã¿ë ÃÖ´ñÄ¡: %d\n", num - 1);
	}
	return 0;
}