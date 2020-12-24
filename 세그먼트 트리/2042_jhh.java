import java.util.*;
public class Main{
    static void init(long[] a, long[] tree, int node, int start, int end){
        if(start==end) tree[node]=a[start];
        else{
            init(a,tree,node*2,start,(start+end)/2);
            init(a,tree,node*2+1,(start+end)/2+1,end);
            tree[node]=tree[node*2]+tree[node*2+1];
        }
    }
    static long query(long[] tree, int node, int start, int end, int i, int j){
        if(i>end||j<start) return 0;
        if(i<=start&&end<=j) return tree[node];
        long s1=query(tree,node*2,start,(start+end)/2,i,j);
        long s2=query(tree,node*2+1,(start+end)/2+1,end,i,j);
        return s1+s2;
    }
    static void update(long[] tree, int node, int start, int end, int i, long diff){
        if(i<start||i>end) return;
        tree[node]=tree[node]+diff;
        if(start!=end){
            update(tree,node*2,start,(start+end)/2,i,diff);
            update(tree,node*2+1,start,(start+end)/2+1,i,diff);
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        int m= sc.nextInt();
        int k= sc.nextInt();
        m+=k;
        long[] a= new long[n];
        for(int i=0;i<n;i++)
            a[i]=sc.nextLong();
        int h=(int)Math.ceil(Math.log(n)/Math.log(2));
        int tree_size=(1<<(h+1));
        long[] tree= new long[tree_size];
        init(a,tree,1,0,n-1);
        while(m-->0){
            int t1=sc.nextInt();
            if(t1==1){
                int t2=sc.nextInt();
                long t3=sc.nextLong();
                t2-=1;
                long diff=t3=a[t2];
                a[t2]=t3;
                update(tree,1,0,n-1,t2,diff);
            }else{
                int t2=sc.nextInt();
                int t3=sc.nextInt();
                System.out.println(query(tree,1,0,n-1,t2-1,t3-1));
            }
        }
    }
}