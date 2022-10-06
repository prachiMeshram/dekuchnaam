vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> temp;
    for(int i =0; i< arr1.size(); i++)
    {
        if (arr1[i] == arr1[i-1])
        {
            for (int j=0; j<arr2.size(); j++)
            {
            if ( (arr1[i]==arr2[j]) && (arr2[j-1]!=arr2[j])) 
            {
                temp.push_back(arr1[i]);
            }
            }
        
        }
    }
    return temp;
}