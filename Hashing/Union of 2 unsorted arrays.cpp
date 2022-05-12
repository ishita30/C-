 //Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.
  int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int>s1;
        unordered_set<int>s2;
        int intersection=0;
       
        for(int i=0;i<n;i++)
        {
            s1.insert(a[i]);
        }
        int size1=s1.size();
        
        
      for(int i=0;i<m;i++)
        {
            if(s1.find(b[i]) != s1.end())
            {
               intersection++;
                s1.erase(b[i]);
            }
        }
       for(int i=0;i<m;i++)
        {
            s2.insert(b[i]);
        }
        int size2=s2.size();
        int ans=size1 + size2 - intersection;
        return ans;
         
           
        
      
       
    }