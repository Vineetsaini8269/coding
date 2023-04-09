public class Kam{
    public static void main(String[] args) {
        int a[]={1,2,3,4};
        int km=0;
        for( int i=0;i<a.length;i++){
            km=km*10+a[i];
        }
        System.out.println(km);
    }
}