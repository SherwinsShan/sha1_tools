#SHA1 计算工具
适用于win linux 系统上  

##用法：  

1. 选择Makefile  
  如果是win:  
  copy  Makefile-Win Makefile

  如果是linux:   
  cp Makefile-Linux Makefile

2. 编译  
  make  

3. 运行大小端测试工具,查看输出信息  
  endianTools(.exe)   
  可以知道该系统是[大端储存还是小端](http://blog.csdn.net/zhaoshuzhaoshu/article/details/37600857/)  

4. 修改源码    
  文件getFileSha1.h 的15行    
  如果系统是大端则    
    使用#define BIG_ENDIAN_HOST 1    
    注释#undef BIG_ENDIAN_HOST    

  如果系统是小端   
    使用#undef BIG_ENDIAN_HOST    
    注释#define BIG_ENDIAN_HOST 1    

5. 再次编译  
  make clean     
  make    

6. 用法:   
  sha1Tool(.exe) file    
