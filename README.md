# cpp
for c++ learning
当增加一个stringstream对象用于文件读写时，每次读取一行后，要将该对象先执行clear()，再str("")，否则该对象无法执行下一次读入。例：

      string varname;
      stringstream str;
      getline(finp,varname);
      getline(finp,varname);
      str<<varname;         //这里把string varname与str关联起来
      str>>mme>>denme>>kme>>kvme>>cme>>ame>>bme>>tme>>eme;         //从str读取这些变量
     // cout<<mme<<" "<<denme<<" "<<kme<<" "<<kvme<<" "<<cme<<" "<<ame<<" "<<bme<<" "<<tme<<" "<<eme<<" "<<endl;

      getline(finp,varname);
      str.clear();          //这里首先要清除str的状态，否则无法执行下一次str<<varname
      str.str("");          //这里是把str上次读入的字符清空，否则下一次读取的内容是附在上一次读取的内容后，str的缓冲区会包含所有读取的内容
      getline(finp,varname);
      str<<varname;         //经过前两步设置后，可以再次读取varname
      str>>mmp>>denmp>>kmp>>kvmp>>cmp>>amp>>bmp>>q>>tmp;
