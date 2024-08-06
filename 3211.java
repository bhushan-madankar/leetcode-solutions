class Solution {
    public List<String> validStrings(int n) {
        List<String> list = new ArrayList<>();
        helper(n,list,"0") ; 
        helper( n , list , "1" ) ; 
        return list;
    }
    public void helper(int n,List<String> list,String s){
        if(s.length()>=n){
            list.add(s);
            return;
        }

        if( s.charAt(s.length()-1) == '0')
        { helper(n , list , s+'1' ) ; 
            return ; 
        }


        helper( n , list, s+'0' ) ;
        helper(n , list , s+'1' ) ;


    }
}


