#include <stdio.h>
int main(void)
{
  int m,n;                                    //输入第一个矩阵的规格
  printf("请输入第一个矩阵的行数和列数:\n");
  scanf("%d %d",&m,&n);

  if(m<=0||n<=0)                              //判断 m,n的值是否有效,如果无效重新输入
  {
    printf("不可小于或等于0!\n");
    printf("请重新输入第一个矩阵的行数和列数:");
    scanf("%d %d",&m,&n);
  }

  printf("请输入第一个矩阵的元素:\n");            //输入第一个矩阵的元素
  int array1[m][n];
  int x_1;
  int i_1,j_1;
  for(i_1=0;i_1<m;i_1++)
  {
    for(j_1=0;j_1<n;j_1++)
    {
      scanf("%d",&x_1);
      array1[i_1][j_1]=x_1;
    }
  }

  int p,q;                                       //输入第二个矩阵的规格
  printf("请输入第二个矩阵的行数和列数:\n");
  scanf("%d %d",&p,&q);

  if(p<=0||q<=0)                              //判断 m,n的值是否有效,如果无效重新输入
  {
    printf("不可小于或等于0!\n");
    printf("请重新输入第二个矩阵的行数和列数:\n");
    scanf("%d %d",&p,&q);
  }

  if(p!=n)                                    //判断第二个矩阵的行数是否等于第一个矩阵的列数  如果不等则重新输入第二个矩阵的行列数
  {
    printf("第二个矩阵的行数应等于第一个矩阵的列数!\n");
    printf("请重新输入第二个矩阵的行数和列数:\n");
    scanf("%d %d",&p,&q);
  }

  int array2[p][q];
  int x_2;
  int i_2,j_2;

  printf("请输入第二个矩阵的元素:\n");            //输入第二个矩阵的元素
  for(i_2=0;i_2<p;i_2++)
  {
    for(j_2=0;j_2<q;j_2++)
    {
      scanf("%d",&x_2);
      array2[i_2][j_2]=x_2;
    }
  }
  
  int array3[m][q];                         //定义第三个矩阵
  int i_3,j_3;
  int i;
  int sum=0;
  for(i_3=0;i_3<m;i_3++)
  {
    for(j_3=0;j_3<q;j_3++)
    {
      for(i=0;i<n;i++)
      {
      sum=sum+array1[i_3][i]*array2[i][j_3];        //对前两个矩阵进行运算，讲结果保存在第三个矩阵里
      array3[i_3][j_3]=sum;
      }
      sum=0;
    }
  }

  printf("两个矩阵相乘得到的结果为:\n");
  
  for(i_3=0;i_3<m;i_3++)                              //输出结果矩阵
  {
    for(j_3=0;j_3<q;j_3++)
    {
      printf("%d \t",array3[i_3][j_3]);
    }
    printf("\n");
  }
  return 0;
}
