#include <stdio.h>
//計算正整數被3整除之數值之總和https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
int main(){
    int num;
    int ans = 0;
    scanf("%d", &num);
    for (int i=0; i<=num; i++) {
        if (i % 3) {
            continue;
        }
        else {
            ans += i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
