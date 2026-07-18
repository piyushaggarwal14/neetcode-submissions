class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> res = new HashMap<>();
        for(String s : strs){
            char[] charArr = s.toCharArray();
            Arrays.sort(charArr);
            String sorted = new String(charArr);
            res.putIfAbsent(sorted, new ArrayList<>());
            res.get(sorted).add(s);
        }
        return new ArrayList<>(res.values());
    }
}
