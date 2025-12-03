#include <stdio.h>

					//structure q2
					
int main() {
    int n;
    
    printf("Enter number of boxes: ");
    scanf("%d", &n);

    int L, W, H;
    int i;

    for (i = 0; i < n; i++) {
        printf("\nEnter length width height of box %d: ", i + 1);
        scanf("%d %d %d", &L, &W, &H);

        if (H < 41) {
            int volume = L * W * H;
            printf("Volume of box %d = %d\n", i + 1, volume);
        } else {
            printf("Box %d cannot pass through the tunnel.\n", i + 1);
        }
    }

    return 0;
}

