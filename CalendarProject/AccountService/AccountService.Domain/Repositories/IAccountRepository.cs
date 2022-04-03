using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AccountService.Domain.Entities;
using AccountService.Domain.Repositories.Base;

namespace AccountService.Domain.Repositories
{
    public interface IAccountRepository:IRepository<Account>
    {

    }
}
