#include <stdio.h>
int surf_internet(){
	printf("欢迎使用梦弘浏览器\n无法访问互联网资源，因为改浏览器没有上网功能。\n");
	return 0;
}
int clean_cache(){
	printf("正在清理浏览器缓存\n无法清理缓存，因为改浏览器不产生任何缓存数据。");
	return 0;
}
int main(){
	surf_internet();
	clean_cache();
	return 0;
}
