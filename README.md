# HomeWork9
Путь к исполняемому файлу
 Создаем два объекта — myFile(класс ifstream, чтение самого себя) и exeFile (класс ofstream, запись нового бинарника).

Открываем исполняемый файл с помощью метода open():

myFile.open(argv[0],ios_base::binary);
Здесь создается бесконечный цикл, в ходе которого считываем самого себя до тех пор, пока не доходим до конца:

if(myFile.eof())break;
Этот код позволяет выйти из цикла как только доходим до конца.

С помощью метода read() читаем себя.

С помощью метода write() записываем прочитанные символы во вновь созданный файл.

В конце зарываем оба файла с помощью метода close().
