#include <stdio.h>
#define MAX_SIZE 50

int main(void){

int usage[MAX_SIZE] = {120, 250, 180, 95, 310};
int n = 5;
int choice;
int loop = 1;
    while (loop == 1){

        printf("======================================\n");
        printf("CHUONG TRINH QUAN LY DIEN NANG SAO MAI\n");
        printf("======================================\n");
        printf("1 them chi so tieu thu\n ");
        printf("2 sua chi so tieu thu \n");
        printf("3 xoa chi so tieu thu \n");
        printf("4 tim chi so tieu thu\n");
        printf("0 thoat chuong trinh \n");
        printf("=======================================\n");
        printf("Vui long nhap vao su lua chon cua ban (0 - 4): ");
        scanf("%d", &choice);

        switch (choice){
        case 1:{
            int value;
            int pos;

            if(n == MAX_SIZE){
                printf("mang da day khong the them ");
                break;
            }
            printf("Moi ban nhap vao chi so  dien can them: ");
            scanf("%d", &value);
            
            if (value < 0) {
                printf("So chi so dien con lai  khong hop le!\n");
                break;
            }

                printf("Moi ban nhap vao vi tri muon chen (1 - %d): ", n + 1);
                scanf("%d", &pos);

               
            if (pos < 1 || pos > n + 1) {
                printf("Vi tri chen khong hop le!\n");
                break;
            }
               
            for (int i = n; i >= pos; i--){
                    usage[i] = usage[i - 1];
            }

                usage[pos - 1] = value;               
                n++;

            printf("Chen thanh cong!\n");

                
            printf("Mang hien tai: ");
            for (int i = 0; i < n; i++){
                printf("%d ", usage[i]);
            }
                printf("\n");

                break;
           
        }
        case 2:{
            int pos;
            int newValue;

            printf("Moi ban nhap vao vi tri can sua (1 - %d): ", n);
            scanf("%d", &pos);

            if (pos < 1 || pos > n) {
                printf("Vi tri sua khong hop le!\n");
                break;
            }

            printf("Moi ban nhap vao gia tri moi: ");
            scanf("%d", &newValue);

                
            if (newValue < 0) {
                printf("So luong dien khong hop le!\n");
                break;
            }
                
            usage[pos - 1] = newValue;

            printf("Sua thanh cong!\n");

                printf("Mang hien tai: ");
            for (int i = 0; i < n; i++){
                printf("%d ", usage[i]);
            }
                printf("\n");

                break;

        }

        case 3:{
           int pos;

                
            if (n == 0) {
                printf("Mang rong, khong the xoa!\n");
                    break;
            }

            printf("Moi ban nhap vao vi tri can xoa (1 - %d): ", n);
            scanf("%d", &pos);

            
            if (pos < 1 || pos > n) {
                printf("Vi tri xoa khong hop le!\n");
                break;
            }

               
            for (int i = pos - 1; i < n - 1; i++) {
                usage[i] = usage[i + 1];
            }
              
            n--;
            printf("Xoa thanh cong!\n");              
            printf("Mang hien tai: ");
            for (int i = 0; i < n; i++){
                printf("%d ", usage[i]);
            }
                printf("\n");

                break;

        }
        case 4: {
            int target;
                int count = 0;

                printf("Moi ban nhap gia tri can tim: ");
                scanf("%d", &target);

                // Tim kiem tuyen tinh
                for (int i = 0; i < n; i++) {
                    if (usage[i] == target) {
                        printf("%d ", i + 1);
                        count++;
                    }
                }

               
                if (count == 0) {
                    printf("Khong tim thay gia tri trong mang!\n");
                } else {
                    printf("\n");
                    printf("Tong so lan xuat hien: %d\n", count);
                }

                break;
            }

            case 0:
            printf("\nThoat chuong trinh!\n");
            loop = 0;
            break;
            default:
            printf("Lua chon khong hop le!\n");
            break;

                          
            }           
        }
        
        
}
  
