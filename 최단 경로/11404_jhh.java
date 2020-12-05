import java.util.*;
public class Main{
    static final int inf=1000000000;
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[][] a=new int[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)
                    a[i][j]=0;
                else
                    a[i][j]=inf;
            }
        }
        for(int i=0;i<m;i++){
            int from=sc.nextInt();
            int to=sc.nextInt();
            int cost=sc.nextInt();
            if(a[from][to]>cost)
                a[from][to]=cost;
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(a[i][j]>a[i][k]+a[k][j])
                        a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==inf) a[i][j]=0;
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
}