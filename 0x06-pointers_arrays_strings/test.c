while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		while (j < i + 10)
		{
		    printf("%02x", *(b + j));
		    printf("%02x ", *(b + j + 1));
		    j = j + 2;
		}
		while (k < i + 10)
		{
		    if(*(b + k) == '\\')
		    {
		        printf("..");
		        k++;
		    }
		    else
		    {
		        printf("%c", *(b + k));
		    }
		    k++;
		}
		
		printf("\n");
		i += 10;
