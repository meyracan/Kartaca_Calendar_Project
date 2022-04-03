using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using AccountService.Infrastructure.Data;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;

namespace AccountService.WebApp.Extensions
{
    public static class MigrationManager
    {
        public static IHost MigrateDatabase(this IHost host)
        {
            using (var scope = host.Services.CreateScope())
            {
                try
                {
                    var accountContext = scope.ServiceProvider.GetRequiredService<AccountContext>();

                    if(accountContext.Database.ProviderName != "Microsoft.EntityFrameworkCore.InMemory")
                    accountContext.Database.Migrate();

                    //AccountContextSeed.SeedAsync(accountContext)
                }
                catch (Exception e)
                {
                    Console.WriteLine(e);
                    throw;
                }
            }

            return host;
        }
    }
}
