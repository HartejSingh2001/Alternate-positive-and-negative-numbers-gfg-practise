class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int> neg;
	    int i,itr1=0,itr2=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(itr1<pos.size())
	            {
	               arr[i]=pos[itr1];
	               itr1++; 
	            }
	            else
	            {
	                arr[i]=neg[itr2];
	                itr2++;
	            }
	            
	        }
	        else
	        {
	            if(itr2<neg.size())
	            {
	                arr[i]=neg[itr2];
	                itr2++;
	            }
	            else
	            {
	                arr[i]=pos[itr1];
	                itr1++;
	            }
	        }
	    }
	}
};
