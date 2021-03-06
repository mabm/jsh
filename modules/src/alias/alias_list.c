/* 
** jSh - The social Shell
** Copyright (C) 2014 Joris Bertomeu
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
** You should have received a copy of the GNU General Public License
** along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <module.h>
#include <jsh.h>

int alias_list(t_jsh *jsh, char **argv)
{
  int	i = 0;

  while (jsh->alias[i][0])
    {
      printf("%s\t\t%s\n", jsh->alias[i][0], jsh->alias[i][1]);
      i++;
    }
  return (MODULE_OK);
}
