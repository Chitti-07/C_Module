#include<stdio.h>
#include<string.h>

void swap(char str[], int start, int end) {
    while (start <= end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
char* reverseStr(char s[], int k) {
    int len = strlen(s);
    for (int i = 0; i < len; i += 2*k) {
        int start = i;
        int end = (i+k) < len ? (i+k)-1 : len-1;
        while (start <= end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        // int newStart = 2*k;
        // end = newStart + k - 1;
        // start = newStart;
    }
    return s;
}

int main() {
    char str[20] = "123456789";
    
    printf("%s", reverseStr(str, 3));

}

//--------------------------------------------------------------------------------------------------------------------------

// int largestAltitude(int* gain, int gainSize) {
//     int maxAlt = 0;
//     int sum = 0;
//     for (int i = 0; i < gainSize; i++) {
//         sum += gain[i];
//         if (sum > maxAlt){
//             maxAlt = sum;
//         }
//     }
//     return maxAlt;
// }

// int main(){
//     int gain[10] = {-5,1,5,0,-7};
//     printf("%d", largestAltitude(gain, 5));
// }
//-------------------------------------------------------------------------------------------------------------
// int main()
// {
// 	int count;
// 	unsigned char iter = 0xFF;

// 	for (count = 0; iter != 0; iter >>= 1)
// 	{
// 		if (iter & 01)
// 		{
// 			count++;
// 		}
// 	}

// 	printf("count is %d\n", count);

// 	return 0;
// }
//-------------------------------------------------------------------------------------------------------------

// #include <stdio.h>

// void nrps(char str1[], int k, int n) {
// 	char str2[n+1];
// 	for (int i = 0; i < n; i++) {
// 		str2[i] = str1[i];
// 	}

// 	for (int i = k; i < n; i++) {
// 		if ((i+1) % k == 0) {
// 			str2[i] = str2[((i+1)-k)-k];
// 		}else {
// 			str2[i] = str2[i-(k-1)];
// 		}
// 	}
// 	str2[n]= 0;

	
// 	printf("%s", str2);
// }
// int main()
// {
// 	int flag;
// 	int charCount;
// 	printf("Enter the no.of character count: ");
// 	scanf("%d", &charCount);
// 	getchar();

//     char str1[charCount];
// 	scanf("%[^\n]", str1);

// 	//Check if the string is distinct or not
// 	for (int i = 0; i < charCount; i++) {
// 		flag = 0;
// 		for (int j = i+1; j < charCount; j++) {
// 			if (str1[i] == str1[j]) {
// 				flag = 1;
// 			}
// 		}
// 		if (flag == 1) {
// 			break;
// 		}
// 	}

	

// 	//If the string is distinct, Then call the function
// 	if (flag == 1) {
// 		printf("Error : Enter distinct characters");
// 	}else {
// 		int Strlen;
// 		printf("Enter the required string length: ");
// 		scanf("%d", &Strlen);
// 		nrps(str1, charCount, Strlen);
// 	}

// }