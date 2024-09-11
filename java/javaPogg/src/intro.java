
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

//psvm
//sout
public class intro {
    public static void main(String[] args) {
        //in ra man hinh
//       int a = 10;
//        long b = 192384173187481L;
//        float pi = 3.14F;
//        double d = 13.134141341;
//        boolean check = true;
//        System.out.println(a); // in co xuong dong
//        System.out.print(b); // in ko xuong dong
//        System.out.println("Gia tri cua a la : " + a);
//        System.out.println("Gia tri cua b la : " + b);
//        // in do chinh xac n chu so
//        System.out.printf("%.2f\n", pi);
//        System.out.printf("%.10f", d);
//        
//        // nhap ban phim
           Scanner sc = new Scanner(System.in);
//        a = sc.nextInt();
//        sc.hasNext(); // tra ve true neu con input
        
        // sap xep
        int[] a = new int[100];
        Arrays.sort(a); // mac dinh la sx tang dan
        
        //Coparator
        // ham so sanh chi ap dung cho kieu du lieu doi tuong
        Integer[] c = new Integer[100];

        Arrays.sort(c, new Comparator<Integer>(){
            @Override
            public int compare(Integer t, Integer t1) {
                return t - t1; // kq am thi sx tang, duong thi sx giam
            }
            
        });
        
        
// ArraysList phai dung lop wrapper, k dung kdl nguyen thuy
        //List<dataType> arr = new ArrayList<>();
        ArrayList<Integer> arr = new ArrayList<>();
        // them phan tu vao array : add
        arr.add(1);
        arr.add(2);
        for(int i = 0; i < arr.size(); i++){
            //nhap
            int x = sc.nextInt();
            arr.add(x);
            // hoac
            arr.add(sc.nextInt());
            // dung get de lay chi so cua phan tu
            System.out.println(arr.get(i));
        }
        // for each
        for(int x : arr){
            System.out.println(x);
        }
        
        // contain : kiem tra su xuat hien trong array
        System.out.println(arr.contains(3)); // tra ve true false
        
        // set
        arr.set(2, 100); // thay doi phan tu vi tri 2 thanh 100
        
        // remove(index) : xoa  phan tu o vi tri index
        arr.remove(2);
        // remove(object) : xoa phan tu dau tien = object
        arr.remove((Object)4);
        
        // indexOf : tra ve vi tri dau tien cua phan tu
        arr.indexOf(2); 
        
        // toArray(); : tra ve mang chua object
        int[] aa = {1, 2, 3, 3, 4, 5};
        for(int x : aa){
            arr.add(x);
        }
        Object[] bb = arr.toArray();
        for(Object x : bb) System.out.println(x + " ");
        
        // hoac dung for each
        int n = sc.nextInt();
        //arr.forEach(n) -> System.out.println(n + " ");
        
        
        
        // thuat toan tim kiem
// binarySearch
        
        Arrays.binarySearch(aa, 1);
        // tra ve vi tri cua index neu tim thay
        // neu k tim thay tra ve -(vi tri duoc chen) - 1
        Collections.binarySearch(arr, n, new Comparator<Integer>(){
               @Override
               public int compare(Integer t, Integer t1) {
                   return t - t1;
               }         
        });
        
        
//set : HashSet, LinkedHashSet, TreeSet
        
    //Hashset
        //Set<dataType> set1 = new HashSet<>();
        //HashSet<dataType> set2 = new HashSet<>();
        
        // Cac ham
        HashSet<Integer> set = new HashSet<>();
        set.add(100);
        set.add(200);
        set.remove(100);
        // khi in se ra thu tu ngau nhien
        for(int x : set) System.out.println(x + " ");
        set.size(); // so luong phan tu trong set
        
        set.contains(100);// tra ve true false
        set.clear();
        set.isEmpty();
        
    //LinkedHashSet : giong HashSet nhung luu theo thu tu them vao   
        LinkedHashSet<Integer> sett = new LinkedHashSet<>();
        
    //TreeSet
    //+ tim kiem, xoa logN
    //+ co thu tu tang dan
        TreeSet<Integer> se = new TreeSet<>();
        Integer x = sc.nextInt();
        se.floor(x); // tra ve phan tu lon nhat <= x
        se.ceiling(x); // tra ve phan tu lon nhat >= x
    
        
        
// Map
     
    //HashMap
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(1, 2);//them phan tu vao map
        map.put(2, 3);
        System.out.println(map.get(1)); // lay value tuong ung voi key
        map.isEmpty();
        map.containsKey(1);
        map.containsValue(2);
        map.remove(x);// xoa cap phan tu co key la x
        
    // duyet cac phan tu trong Map
        Set<Map.Entry<Integer, Integer>> entrySet = map.entrySet();
        for(Map.Entry<Integer, Integer> entry : entrySet){
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
        //LinkedHashMap : giong HashMap nhung co thu tu
   
        
    //TreeMap : cac key duoc sap xep theo thu tu tang dan 
        TreeMap<Integer, Integer> mapp = new TreeMap<>();
        mapp.put(1, 2);
        mapp.put(2, 3);
        Set<Map.Entry<Integer, Integer>> entrySett = mapp.entrySet();
        ArrayList<Map.Entry<Integer, Integer>> arr1 = new ArrayList<>();
        for(Map.Entry<Integer, Integer> entry : entrySett){
            arr1.add(entry);
        }
        for(int i = 0; i < arr1.size(); i++){
            System.out.println(arr1.get(i).getValue());
        }
                
                
                
    }   
}
