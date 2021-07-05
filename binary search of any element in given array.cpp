int binarysearch(int a[],int m,int key)
{
	int l=0;
	int r=m-1;
	
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		
		//Base case
		if(a[mid]==key)
		{
			return 1;
		}
		else if(a[mid]<key)  //it must be present in right half
		{
			l=mid+1;
		}
		else if(a[mid]>key)  //it must be present in right half
		{
			r=mid-1;
		}
	}
}
