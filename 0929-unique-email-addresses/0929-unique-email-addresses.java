class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> normalize =new HashSet<String>();
        for(String email:emails)
        {
            String[] parts=email.split("@");
            String[] local=parts[0].split("\\+");
            normalize.add(local[0].replace(".","")+"@"+parts[1]);
        }
        return normalize.size();
    }
}