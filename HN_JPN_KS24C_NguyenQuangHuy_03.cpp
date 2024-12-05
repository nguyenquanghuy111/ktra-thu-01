#include<stdio.h>
int main(){
	int arr[100];
	int choice,snt,dem,max,max2,viTri,phanTuMoi,xoa; 
	int size=0; 
	do{
		printf("menu\n");
		printf("1:nhap so phan tu va gia tri cho mang\n");
		printf("2:in cac phan tu trong mang\n");
		printf("3:dem so luong cac so nguyen to co trong mang\n");
		printf("4:tim kiem gia tri nho thu hai trong mang\n");
		printf("5:them mot phan tu vao vi tri ngau nhien trong mang,phan tu moi them vao mang va vi tri them vao mang\n");
		printf("6:xoa phan tu tai mot vi tri cu the\n");
		printf("7:sap xep phan tu theo thu tu giam dan\n");
		printf("8:nguoi dung nhap vao mot phan tu va tim kiem phan tu trong mang\n");
		printf("9:xoa cac phan tu trung lap va hien thi toan bo phan tu doc nhat\n");
		printf("10:dao nguoc thu tu cac phan tu co trong mang\n");
		printf("11:thoat\n");
		printf("ban hay nhap lua chon\n");
		scanf("%d",&choice); 
		switch(choice){
			case 1:
				printf("nhap so phan tu: ");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("nhap phan tu thu %d: ",i+1);
					scanf("%d",&arr[i]); 
				}
				break;
			case 2:
                if(size<1){
                	printf("chua khoi tao mang");
					continue; 
				}
				printf("mang cua ban la: ");
				for(int i=0;i<size;i++){
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			case 3:
			case 4:
				 for(int i=0;i<size;i++){
				 	if(max<arr[i]){
				 		max=arr[i]; 
					 }
				for (int i=0;i<size;i++){
					if(max2<max){
						max2=arr[i]; 
					}	
					}
					printf("phan tu nho thu 2 la:%d\n",max2);
					break; 
				    }
			case 5:
				if(size < 1){
					printf("chua khoi tao mang");
					continue; 
				}
            	if(size >= 100){
					printf("mang da day!"); 
				} else{
					printf("nhap vi tri muon them phan tu: ");
					scanf("%d", &viTri);
					printf("nhap phan tu muon them: ");
					scanf("%d", &phanTuMoi);
					if(viTri < 1||viTri > size +1){
						printf("vi tri khong hop le!"); 
					}else{
						for(int i = size; i >=viTri;i--){
							arr[i] = arr[i -1]; 
						} 
						arr[viTri - 1] = phanTuMoi;
						size++;	
					}
				}
				break;
			case 6:
			 	if(size < 1){
					printf("chua khoi tao mang");
					continue;
				}
				printf("nhap vi tri muon xoa phan tu: ");
				scanf("%d", &viTri);
				if(viTri < 1||viTri > size +1){
					printf("vi tri khong hop le!"); 
				}else{
					for(int i = viTri - 1; i <= size;i++){
						arr[i] = arr[i + 1]; 
					} 
					size--; 
				}
				break;
			case 7: 
			case 8:{ 
                int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                printf("Phan tu %d xuat hien tai vi tri: ", value);
                for (int i = 0; i < size; i++) {
                    if (arr[i] == value) {
                        printf("%d ", i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay!");
                }
                printf("\n");
                break;
            }
			case 9:
				for(int i=0;i<size;i++){
					if(arr[i]=arr[i]){
						xoa=arr[i]; 
					}
				printf("%d",arr[i]);	
				}
				break; 
			
}
	}while(choice != 11); 
	return 0;
}
	
		 
	

 
