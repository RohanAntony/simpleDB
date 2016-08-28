#Design
- There is a default folder called 'db' in the application directory(default) or can be changed by the programmer
- The db folder contains 'n' folders with each folder representing a database
  - New folder is created when a new database is created
- Each folder has 'm'+1 files where each of the 'm' files are tables
- These m files store the data in .csv form(not sure) or binary
- 'm'+1 file is 'settings' which has the database details
- 'settings' file follows a general structure
  - first line defines number of tables
  - second, fourth, sixth ... lines define
    - number of columns , table name
  - third, fifth, seventh ... lines define
    - name of the columns of table defined in above line
    - number of name of columns must match with the above line
- State based application where only one database is stored on the memory actively

#Implementation
- Data structures that hold all the tables and database information.
- Preferably implement a timer function that can be set to write data back to the databases regularly as an event (should be implemented on seperate thread)
