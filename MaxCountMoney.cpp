/*
*/


#include <stdio.h>
#include<iostream>
#include<vector>
int GetMaxValue(std::vector<int> &table,std::vector<int> &cus,std::vector<float> &money)
{
	int maxVal = 0;
	int maxPeople = table.size();
	int count = 0;
	std::vector<int>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
	
	}
}
bool compare(int a, int b)
{
	return a>b;
}
int main(int argc, char *argv[])
{
	int m,n;
	std::vector<int> table_max;
	std::vector<int> people;// 人数
	std::vector<float> consump; //消费数组
	int index = 0;
	int max_people= 0;
	std::cin>>n>>m; //第一行输入 n 张桌子和 m 批客人
	
	while(index>n){
		std::cin>>max_people;
		table_max.push_back(max_people);
		++index;
	}// 第二行n个参数为每个桌子的最大容纳人数a
	index = 0;
	int person = 0;
	float money = 0.0;
	while(index < m){
		std::cin>>person>>money;
		people.push_back(person);
		consump.push_back(money);
		++index;
	}//下面的  m 行，每行有第i批客人的人数 b 和 预计消费的金额 c 
	
	return 0;
}
