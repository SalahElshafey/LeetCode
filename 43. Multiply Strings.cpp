class Solution {
public:

	string multiply(string a, string b) {
		string res="";
		int l=0;
		for(int i=b.length()-1;i>=0;i--) {
			int rem=0;
			string str="";
			for(int j=a.length()-1;j>=0;j--) {
				int pro=(a[j]-'0')*(b[i]-'0');
				int val=(rem+pro)%10;
				rem=(rem+pro)/10;
				str+='0'+val;
			}
			if(rem) str+='0'+rem;
			reverse(str.begin(),str.end());
			int k=0;
			while(k<l) str+='0',k++;
			res=addStrings(res,str);
			l++;
		}
		while(res.length()&&res[0]=='0') res=res.substr(1);
		if(res.length()==0) res="0";
		return res;
	}

	string addStrings(string a, string b) {
		int n=a.length()-1;
		int m=b.length()-1;
		int rem=0,sum;
		string str="";
		while(n>=0&&m>=0) {
			sum=(a[n]-'0'+b[m]-'0'+rem)%10;
			rem=(a[n]-'0'+b[m]-'0'+rem)/10;
			str+=sum+'0';
			n--,m--;
		}
		while(n>=0) {
			sum=(a[n]-'0'+rem)%10;
			rem=(a[n]-'0'+rem)/10;
			str+=sum+'0';
			n--;
		}
		while(m>=0) {
			sum=(b[m]-'0'+rem)%10;
			rem=(b[m]-'0'+rem)/10;
			str+=sum+'0';
			m--;
		}
		if(rem) str+=rem+'0';
		reverse(str.begin(),str.end());
		return str;
	}
};
