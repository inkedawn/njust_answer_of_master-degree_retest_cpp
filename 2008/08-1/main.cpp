/*从键盘输入一个带有数字的字符串，将其中数字所在的位置输出，
并把字符串小写字符变成大写字符再输出。
例如：输入ab2cd3ef4按回车输出 3 6 9 AB2CD3EF4*/
#include <bits/stdc++.h>
int main(){
	std::string a;
	std::cin>>a;  //输入字符串
	for(int i = 0; i<a.length(); i++){  //遍历字符串
		if(a[i]>='0' && a[i]<='9'){  //判断字符是否为数字
			std::cout<<i+1<<" ";  //若是数字，则输出该字符的位置，因下标是从0开始的，故下标需要加1才为字符的位置
		}
        else if(a[i]>='a' && a[i]<='z'){  //判断字符是否为小写字母
			a[i] = a[i]-32;  //若是小写字母，则将小写字母转化为大写字母
		}
	}
    std::cout<<a;  //输出转化后的字符串
}		
