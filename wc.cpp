#include<stdio.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;

struct file_info_
{
	char *name = NULL;
	int num_appear;
};
void order(vector<struct file_info_>);
	//����һ���ַ��͵����ݽ����ļ����ַ��Ĵ���
bool comp(file_info_ a, file_info_ b) { return a.num_appear>b.num_appear; }
vector<struct file_info_> file_info_cahr;
int main() 
{
file_info_ file1;
file1.num_appear=2;
char name[10]="2333333\n";
file1.name=name;
file_info_cahr.push_back(file1);
file_info_cahr.push_back(file1);
file_info_cahr.push_back(file1);
file_info_cahr.push_back(file1);
	
	order(file_info_cahr);
	return 0;
} 
void order(vector<struct file_info_> file_)
{
	//����Ҫ�ų�������Ԫ��Ϊ�յ����
	if (file_.size() == 0)
	{
		printf("û�м�⵽����\n");
		return;
	}
	//�ȶ�Ԫ������,�������������

	sort(file_info_cahr.begin(), file_info_cahr.end(), comp);
	//Ȼ��Ϳ��������
	for (int i = 0; i<file_info_cahr.size(); i++)
	{
		printf("%s :: %d \n", file_info_cahr[i].name, file_info_cahr[i].num_appear);
	}
getchar();

}
