#include <stdio.h>
#include<stdlib.h>
void insert(int* table, int table_size) {
int key, index, i, hash, flag = 0;
printf("Enter a value to insert into hash table: ");
scanf("%d", &key);
hash = key % table_size;
for (i = hash; i < table_size + hash; i++) {
index = (i % table_size);
if (table[index] == -9999) {
table[index] = key;
flag = 1;
break; } }
if (flag == 0)
printf("Element cannot be inserted\n");
}
void search(int* table, int table_size) {
int key, index, i, hash, flag = 0;
printf("Enter search element: ");
scanf("%d", &key);
hash = key % table_size;
for (i = hash; i < table_size + hash; i++) {
index = (i % table_size);
if (table[index] == key) {
printf("Value found at index %d\n",index);
flag = 1;
break; } }
if (flag == 0)
printf("Value not found\n");
}
void display(int* table, int table_size) {
int i;
printf("Elements in the hash table are\n");
for (i = 0; i < table_size; i++) {
if (table[i] == -9999)
printf("At index %d \t value = NULL\n", i);
else
printf("At index %d \t value = %d\n", i, table[i]);
} }
int main() {
int *table;
int table_size, choice, i;
printf("Enter table size: ");
scanf("%d", &table_size);
table = (int *)malloc(table_size * sizeof(int));
for (i = 0; i < table_size; i++)
table[i] = -9999;
while(1) {
printf("1. Insert\n2. Display\n3. Search\n4. Exit\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert(table, table_size);
break;
case 2:
display(table, table_size);
break;
case 3:
search(table, table_size);
break;
case 4:
return 0;
default:
printf("Wrong choice\n");
} }
return 1; }