//print matrix in spiral form. {{0,1,2} {3,4,5} {6,7,8}}
//                               {{9,10,11} {12,13,14} {15,16,17}}
//                               {{18,19,20} {21,22,23} {24,25,26}}
//1 2 3 4 5 6 7 8 17 26 25 24 23 22 21 20 19 18 9 10 11 12 13 14 15 16
# include<iostream>
using namespace std;
int main()
{
int mat[4][4],i,j,c,r,lt=0,rt,top=0,bot;
cout<<"Enter the no of rows in matrix\n";
cin>>r;
cout<<"Enter the no of cloumns in matrix\n";
cin>>c;

rt=c-1;
bot=r-1;
cout<<"Enter the  matrix elements\n";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cin>>mat[i][j];
    }
    cout<<"\n";
}
cout<<"The  matrix is\n";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"Matrix elements in spiral form are\n";
while(top<=bot && lt<=rt)
{
  for(i=lt;i<=rt;i++)
  {
    cout<<mat[top][i]<<" ";
  }
  top++;
  for(i=top;i<=bot;i++)
  {
    cout<<mat[i][rt]<<" ";
  }
  rt--;
  if(top<=bot)
  {
  for(i=rt;i>=lt;i--)
  {
    cout<<mat[bot][i]<<" ";
  }
  }
  bot--;
  if(lt<=rt)
  {
   for(i=bot;i>=top;i--)
  {
    cout<<mat[i][lt]<<" ";
  }
  lt++;
}
}
    return 0;
}