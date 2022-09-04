# mysqldebug version 0.3 Beta

**Include of MySQL Functions.**
  
## Functions

* ```debug_last_query``` Show if the last query have any error, with the query.
* ```debug_str_query``` Show if the last query have any error, but, in string format. Don't have any query to show.
* ```debug_query``` Send One Query and return if have any error or not. with the query.

### Returns Values

|Function | Return Value|
|---------|:-------------:|
debug_last_query|The Error Code
debug_str_query|Don't Return Any Specific Value
debug_query|Returns The Error Code
  
*Made By Victor Ghost.*
