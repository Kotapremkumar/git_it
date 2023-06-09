//Inserting and Appending in a Array 
 #include<stdio.h>
 #include<stdlib.h>
/*struct Array
{
 int A[10];
 int size;
 int length;
}; 
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 {
 int i;
 
 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 } 
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,0,12);
Display(arr1);
 return 0;
} */

//Deleting from Array 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)
 arr->A[i]=arr->A[i+1];
 arr->length--;
 return x;
 }
 return 0;
}
int main()
{
 struct Array arr1={{2,3,4,5,6},10,5};
 printf("%d",Delete(&arr1,0));
 Display(arr1);
 return 0;
} */

//Searching in a Array 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int LinearSearch(struct Array *arr,int key)
{
 int i;
 for(i=0;i<arr->length;i++)
 {
 if(key==arr->A[i])
 {
 swap(&arr->A[i],&arr->A[0]);
 return i;
 }
 }
 return -1;
}
int main()
{
 struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
 printf("%d",LinearSearch(&arr1,14));
 Display(arr1);
 return 0;
} */

//Get Set Max Min on Array 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
int Get(struct Array arr,int index)
{
 if(index>=0 && index<arr.length)
 return arr.A[index];
 return -1;
}
void Set(struct Array *arr,int index,int x)
{
 if(index>=0 && index<arr->length)
 arr->A[index]=x;
}
int Max(struct Array arr)
{
 int max=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]>max)
 max=arr.A[i];
 }
 return max;
}
int Min(struct Array arr)
{
 int min=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]<min)
 min=arr.A[i];
 }
 return min;
}
int Sum(struct Array arr)
{
 int s=0;
 int i;
 for(i=0;i<arr.length;i++)
 s+=arr.A[i];
 return s;
}
float Avg(struct Array arr)
{
 return (float)Sum(arr)/arr.length;
}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 printf("%d",Sum(arr1));
 Display(arr1);
 return 0;
} */

//Reversing an Array 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
void Reverse(struct Array *arr)
{
 int *B;
 int i,j;
 
 B=(int *)malloc(arr->length*sizeof(int));
 for(i=arr->length-1,j=0;i>=0;i--,j++)
 B[j]=arr->A[i];
 for(i=0;i<arr->length;i++)
 arr->A[i]=B[i];
 
}
void Reverse2(struct Array *arr)
{
 int i,j;
 for(i=0,j=arr->length-1;i<j;i++,j--)
 {
 swap(&arr->A[i],&arr->A[j]);
 }
}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 Reverse(&arr1);
 Display(arr1);
 return 0;
} */

//Checking if Array is Sorted 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int isSorted(struct Array arr)
{
 int i;
 for(i=0;i<arr.length-1;i++)
 {
 if(arr.A[i]>arr.A[i+1])
 return 0;
 }
 return 1;
}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 printf("%d",isSorted(arr1));
 Display(arr1);
 return 0;
} */

//Merging 2 Arrays 
/* struct Array
{
 int A[10];
 int size;
 int length;
};
void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
} 
struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;
 
 struct Array *arr3=(struct Array *)malloc(sizeof(struct 
Array));
 
 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 arr3->A[k++]=arr1->A[i++];
 else
 arr3->A[k++]=arr2->A[j++];
 }
 for(;i<arr1->length;i++)
 arr3->A[k++]=arr1->A[i];
 for(;j<arr2->length;j++)
 arr3->A[k++]=arr2->A[j];
 arr3->length=arr1->length+arr2->length;
 arr3->size=10;
 
 return arr3;
}
int main()
{
 struct Array arr1={{2,9,21,28,35},10,5}; 
 struct Array arr2={{2,3,16,18,28},10,5}; 
 struct Array *arr3; 
arr3=Merge(&arr1,&arr2); 
Display(*arr3);
 
return 0; 
} */

//Set Operations on Arrays 