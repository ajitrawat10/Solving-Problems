  #include<iostream>
using namespace std;

bool issafe(int board[10][10],int i,int j,int n)
{
        //check for column
        for (int row=0;row<i;row++)
        {
            if (board[row][j]==1)
                return false;
        }
        //check for left diagonal

       int x=i;
       int y=j;
       while(x>=0 && y>=0)
       {
           if (board[x][y]==1)
            return false;

           x--;
           y--;
       }

       //check for right diagonal
       x=i;
       y=j;
       while(x>=0 && y<=n)
       {
           if (board[x][y]==1)
            return false;

           x--;
           y++;
       }

        return true;
}

bool solveNqueen(int board[10][10],int i,int n)
{
    //Base case
    if (i==n)
    {
        //you have succesfully placed n queen in rows(0 to n-1)
        //print the board
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (board[i][j]==1)
                    cout<<"Q";
                else
                    cout<<"_ ";

            }
            cout<<endl;
        }

        return true;
    }
    //Recursive case
    //Try to place the queen in current row and call on the remaining part which will be solve using recursion.
    //Iterate over the columns
    for (int j=0;j<n;j++)
    {
        //I have to check if i,j position is safe or not.
        if (issafe(board,i,j,n))
        {
            //Place the queen -assuming i,j is in the right position
            board[i][j]=1;

            bool nextqueenrakhpaye = solveNqueen(board,i+1,n);
            if (nextqueenrakhpaye)
            {
                return true;
            }
            //Means i,j is not the right position - Assumption is wrong
            board[i][j]=0; //Backtrack
        }
    }

    //You have tried all position in the current row but couldn't place a queen
    return false;


}
int main()
{
   int n;
   cin>>n;

  int board[10][10]={0};
  solveNqueen(board,0,n);
    return 0;
}
