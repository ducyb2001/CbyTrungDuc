//-------------------Decimal to Binary------------------
/*
#include <stdio.h>

void dec2bin(int n);   
int main(void) {
	int n;
	printf("
	Enter n: ");
	scanf("%d", &n);
	printf("\n");
	dec2bin(n);
	
}

void dec2bin(int n) {
	if (n == 0) {
		return;
	}
	dec2bin(n / 2);
	printf("%d", n % 2);
}
*/

// ------ Selection Sort ---------
//void selection_sort(int array[], int length_of_array) {
//	int i, j, temp, temp2, vt_min;
//  	for (i = 0; i < length_of_array; i++) {
//	  	temp = array[i];
//	  	vt_min = i;
//	  	for (j = i; j < length_of_array; j++) {
//	  		if (array[j] < temp) {
//	  			vt_min = j;
//	  			temp = array[j];
//			  }
//		  }
//		  temp2 = array[i];
//		  array[i] = temp;
//		  array[vt_min] = temp2;
//  	}
//	
//}
 

//-------------------Bubble Sort-----------------------
/*
#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nBefore sorting:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	printf("\nAfter sorting:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/

/*

// CHECKING FUNCTION
// 1 MEANS "YES"
// 0 MEANS "NO"
int fibonacci(int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int is_fibonacci(int n) {
	int i = 0;
	while (1 == 1) {
		if (fibonacci(i) < n) {
			i++;
		} else if (fibonacci(i) == n) {
			return 1;
		} else {
			return 0;
		}
	}
}

int is_sochinhphuong(int n) {
	int c = sqrt(n);
	if (n < 0) {
		return 0;
	} else if (c * c < n) {
		return 0;
	} else {
		return 1;
	}
}


*/

// ----SO TIEN------
//#include <stdio.h>
//
//int main(void) {
//	int a[2][9] = {{500, 200, 100, 50, 20, 10, 5, 2, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0}};
//	int n, i = 0;
//	printf("Nhap so tien (k VND): ");
//	scanf("%d", &n);
//	while (n != 0) {
//		a[1][i] = n / a[0][i];
//		n %= a[0][i];
//		i++;
//	}
//	for (i = 0; i < 9; i++) {
//		if (a[1][i] > 0) {
//			printf("So to %d,000VND la: %d\n", a[0][i], a[1][i]);
//		}
//	}
//}


// --- INSERT ---
//void insert(int array[], int length, int position, int value) {
//	int temp1 = array[position - 1];
//	int temp2;
//	for (int i = position; i <= length; i++) {
//		temp2 = array[i];
//		array[i] = temp1;
//		temp1 = temp2;
//	}
//	array[position - 1] = value;
//	
//}


// --- DELETE ---
//void delete(int array[], int length, int position) {
//	for (int i = position - 1; i < length - 1; i++) {
//		array[i] = array[i + 1];
//	}
//	
//}

// --- GET ARRAY ---
//void get_array(int array[], int *array_length) {
//	printf("How many numbers do you want to add, my lord? ");
//	scanf("%d", array_length);
//	for (int i = 0; i < *array_length; i++) {
//		printf("Number %d: ", i + 1);
//		scanf("%d", &array[i]);
//	}
//}

// --- PRINT ARRAY ---
//void print_array(int array[], int array_length) {
//	for (int i = 0; i < array_length; i++) {
//		printf("%d ", array[i]);
//	}
//}


// --- IS A PALINDROME NUMBER ---
//int is_palindrome(int n) {
//	int temp  = n, sum = 0;
//	while (n != 0) {
//		sum = sum * 10 + n % 10;
//		n /= 10;
//	}
//	
//	if (sum == temp) {
//		return 1;
//	} else {
//		return 0;
//	}
//}

//int is_palindrome_string(char string[]) {
//	for (int i = 0; i < strlen(string); i++) {
//		if (string[i] != string[strlen(string) - i - 1]) {
//			return 0;
//		}
//	}
//	return 1;
//}


// --- FIBONACCI ---
//int fibonacci(int n) {
//	if (n == 0 || n == 1) {
//		return n;
//	} else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}

//int is_fibonacci(int n) {
//	int i = 0;
//	while (1) {
//		if (fibonacci(i) < n) {
//			i++;
//		} else if (fibonacci(i) == n) {
//			return 1;
//		} else {
//			return 0;
//		}
//	}
//}


// --- SO CHINH PHUONG ---
//int is_sochinhphuong(int n) {
//	int c = sqrt(n);
//	if (n < 0) {
//		return 0;
//	} else if (c * c < n) {
//		return 0;
//	} else {
//		return 1;
//	}
//}

// --- ARMSTRONG ---
//int is_armstrong(int n) {
//	if (n < 0) {
//		return 0;
//	}
//	int so_chu_so = 0;
//	int temp1 = n;
//	int temp2 = 0;
//	while (n != 0) {
//		so_chu_so++;
//		n /= 10;
//	}
//	n = temp1;
//	while (n != 0) {
//		temp2 += pow(n % 10, so_chu_so);
//		n /= 10;
//	}
//	
//	if (temp2 == temp1) {
//		return 1;
//	} else {
//		return 0;
//	}
//}

// --- PRIME ---
//int is_prime(int n) {
//	if (n < 2) {
//		return 0;
//	} else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) {
//				return 0;
//			}
//		}
//		return 1;
//	}
//}


// --- UPPER, LOWER, TITLE
//char upper(char c) {
//	if (c >= 'a' && c <= 'z') {
//		return c - 32;
//	}
//	return c;
//}
//
//char lower(char c) {
//	if (c >= 'A' && c <= 'Z') {
//		return c + 32;
//	}
//	return c;
//}
//
//void title(char string[]) {
//	int is_space = 0;
//	for (int i = 0; i < strlen(string); i++) {
//		if (i == 0) {
//			string[0] = upper(string[0]);
//		} else if (is_space) {
//			string[i] = upper(string[i]);
//			is_space = 0;
//		} else if (string[i] == ' ') {
//			is_space = 1;
//		} else {
//			string[i] = lower(string[i]);
//		}
//	}
//}

//void swap(int& x, int& y) {
//	int tg = x;
//	x = y;
//	y = tg;
//}
//
//int IndexOf(int a[], int n, int x) {
//	int i;
//	for(i = 0; i < n; i++) {
//		if(a[i] == x) return i;
//	}
//	return -1;
//}
//
//void RemoveAt(int a[], int& n, int k) {
//	if(k == -1) return;
//	int i;
//	for(i = k; i < n - 1; i++) {
//		a[i] = a[i + 1];
//	}
//	n--;
//}
//
//void InsertAt(int a[], int& n, int v, int k) {
//	if(k < 0 || k > n) return;
//	int i;
//	for(i = n; i > k; i--) {
//		a[i] = a[i - 1];
//	}
//	a[k] = v;
//	n++;
//}
//
//int imax(int a[], int n) {
//	int imax = 0, i;
//	for(i = 1; i < n; i++) {
//		if(a[i] > a[imax]) imax = i;
//	}
//	return imax;
//}
//
//void SelectionSort(int a[], int n) {
//	int i, j;
//	for(i = 0; i < n - 1; i++) {
//		//tim min trong doan tu i + 1 den n - 1
//		int imin = i + 1;
//		for(j = i + 1; j < n; j++) {
//			if(a[j] < a[imin]) imin = j;
//		}
//		if(a[i] > a[imin]) swap(a[i],a[imin]);
//	}
//}
//
//void BubbleSort(int a[], int n) {
//	int i, j;
//	for(i = 0; i < n - 1; i++) {
//		for(j = i + 1; j < n; j++) {
//			if(a[i] > a[j]) swap(a[i],a[j]);
//		}
//	}
//}


// --- STRING ---
//void swap(char x[], char y[]) {
//	char tg[30];
//	strcpy(tg, x);
//	strcpy(x, y);
//	strcpy(y,tg);
//}
//
//void BubbleSort(char a[][30], int n) {
//	int i, j;
//	for(i = 0; i < n - 1; i ++)
//		for(j = i + 1; j < n; j++)
//			if(strcmp(a[i],a[j]) > 0) swap(a[i],a[j]);
//}
//
//int imax(char a[][30], int n) {
//	int imax = 0;
//	for(int i = 1; i < n; i++) {
//		if(strlen(a[i]) > strlen(a[imax])) imax = i;
//	}
//	return imax;
//}
//
//void RemoveAt(char a[][30], int& n, int k) {
//	int i;
//	if(k < 0 || k >= n) return;
//	for(i = k; i < n - 1; i++) {
//		strcpy(a[i],a[i + 1]);
//	}
//	n --;
//}
//
//void Split(char s[], char st[][30], int & n) {
//	int i, j, len;
//	len = strlen(s);
//	n = 0;
//	i = 0;
//	while(i < len) {
//		//tim i la vi tri dau tien trong s, sao cho s[i] # empty
//		while(i < len && s[i] == ' ') i++;
//		if(i < len) {
//			char x[30];
//			//sao chep moi ky tu s[i] vao x, cho den khi s[i] = empty
//			j = 0;
//			while(i < len && s[i] != ' ') {
//				x[j] = s[i]; i++; j++;
//			}
//			x[j] = '\0';
//			strcpy(st[n],x);
//			n++;
//		}
//		i++;
//	}
//}
//
//void ToString(char s[], char st[][30], int n) {
//	strcpy(s,"");
//	int i;
//	for(i = 0; i < n; i++) {
//		strcat(s,st[i]);
//		if(i < n - 1) strcat(s, " ");
//	}
//}
//int main() {
//	 char st[10][30];int n, i;
//	 char s[30] = "is the quick fox 2015";
//	 Split(s,st,n);
//	 BubbleSort(st,n);
//	 ToString(s,st,n);
//	 puts(s);
//}


// --- Sap xep ten theo chu cai -----
//// Get number of names
//	int number_of_names;
//	printf("Enter number of names: ");
//	scanf("%d", &number_of_names);
//	fflush(stdin);
//
//	
//	// Get names
//	char names[number_of_names][100];
//	for (int i = 0; i < number_of_names; i++) {
//		printf("Enter name %d: ", i + 1);
//		gets(names[i]);
//	}
//	
//	// Sorting
//	int position_array[number_of_names], temp;
//	for (int i = 0; i < number_of_names; i++) {
//		position_array[i] = i;
//	}
//	for (int i = 0; i < number_of_names; i++) {
//		for (int j = 0; j < number_of_names - i - 1; j++) {
//			if (strcmp(names[position_array[j]], names[position_array[j + 1]]) > 0) {
//				temp = position_array[j];
//				position_array[j] = position_array[j + 1];
//				position_array[j + 1] = temp;
//			}
//		}
//	}
//	
//	// Print names
//	for (int i = 0; i < number_of_names; i++) {
//		printf("%s\n", names[position_array[i]]);
//	}
//	
