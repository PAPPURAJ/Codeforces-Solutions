class Solution {

    int count(String s){
        int out=0;
        for(int i=0;i<s.length();i++)
            out=out*10+((int)(s.charAt(i))-'a');    
        return out;
    }

    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        return count(firstWord)+count(secondWord)==count(targetWord);
    }
}
