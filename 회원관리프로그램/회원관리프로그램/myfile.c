//myfile.c
#include "std.h"

#define FILE_NAME_TEXT	"members_text.txt"
#define FILE_NAME_BINARY "members_binary.txt"

//text
void myfile_save_text(const MyArr* parr)
{
	FILE* fp;
	int err = fopen_s(&fp, FILE_NAME_TEXT, "w");  //write
	if (err != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size = myarr_get_size(parr);
	fprintf(fp, "%d\n", size);

	for (int i = 0; i < myarr_get_size(parr); i++)
	{
		Member* p = myarr_get_data(parr, i);

		fprintf(fp, "%d ", p->number);
		fprintf(fp, "%s ", p->name);
		fprintf(fp, "%s\n", p->phone);
	}

	fclose(fp);

}

void myfile_load_text(MyArr* parr)
{
	FILE* fp;
	int err = fopen_s(&fp, FILE_NAME_TEXT, "r");  //write
	if (err != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size;
	fscanf_s(fp, "%d", &size);
	for (int i = 0; i < size; i++)
	{
		Member mem;
		fscanf_s(fp, "%d", &mem.number);
		fscanf_s(fp, "%s", mem.name, (int)sizeof(mem.name));
		fscanf_s(fp, "%s", mem.phone, (int)sizeof(mem.phone));

		Member* p = mem_create(mem.number, mem.name, mem.phone);

		myarr_insert(parr, p);
	}

	fclose(fp);
}

//binary
void myfile_save_binary(const MyArr* parr)
{
	FILE* fp;
	int err = fopen_s(&fp, FILE_NAME_BINARY, "wb");  //write
	if (err != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size = myarr_get_size(parr);
	fwrite(&size, sizeof(int), 1, fp);

	for (int i = 0; i < myarr_get_size(parr); i++)
	{
		Member* p = myarr_get_data(parr, i);
		fwrite(p, sizeof(Member), 1, fp);
		
	}

	fclose(fp);
}

void myfile_load_binary(MyArr* parr)
{
	FILE* fp;
	int err = fopen_s(&fp, FILE_NAME_BINARY, "rb");  //write
	if (err != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size;
	fread(&size, sizeof(int), 1, fp);

	for (int i = 0; i < size; i++)
	{
		Member mem;
		fread(&mem, sizeof(Member), 1, fp);

		Member* p = mem_create(mem.number, mem.name, mem.phone);

		myarr_insert(parr, p);
	}

	fclose(fp);
}
