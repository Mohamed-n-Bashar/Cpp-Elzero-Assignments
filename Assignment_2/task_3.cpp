/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ invalid ] => start with number
  __name      [ Valid | Bad Practice ] => start with 2 underscore
  name@name   [ invalid ] => use special character "@"
  name10name  [ Valid | Bad Practice ] => use number
  name!name   [ invalid ] => use special character "!"
  first_NAME  [ Valid | Bad Practice ] => NAME is capital
  first_name  [ Valid | Best Practice ] => use snake_case
  firstName   [ Valid | Best Practice ] => use camelCase
  first name  [ invalid ] => use Space
  fn          [ Valid | Bad Practice ] => short
  public      [ invalid ] => Reserved word
  Public      [ valid | Bad Practice] => 
*/