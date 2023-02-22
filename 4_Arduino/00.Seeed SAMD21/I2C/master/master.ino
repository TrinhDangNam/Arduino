/* I2C Master Code */
#include <asf.h>
#include <stdio.h>

#define SLAVE_ADDRESS 0x12

void configure_i2c_master(void)
{
  struct i2c_master_config config_i2c_master;
  i2c_master_get_config_defaults(&config_i2c_master);
  config_i2c_master.baud_rate = 100000;
  config_i2c_master.pinmux_pad0 = EDBG_I2C_SERCOM_PINMUX_PAD0;
  config_i2c_master.pinmux_pad1 = EDBG_I2C_SERCOM_PINMUX_PAD1;
  i2c_master_init(&i2c_master_instance, SERCOM2, &config_i2c_master);
  i2c_master_enable(&i2c_master_instance);
}

int main(void)
{
  uint8_t data = 0xA5;
  uint8_t read_data;
  uint16_t timeout = 1000;

  configure_i2c_master();

  i2c_master_write_packet_wait(&i2c_master_instance, &data, 1, SLAVE_ADDRESS, timeout);

  i2c_master_read_packet_wait(&i2c_master_instance, &read_data, 1, SLAVE_ADDRESS, timeout);

  if(read_data == data)
    printf("Data transferred successfully\n");
  else
    printf("Data transfer failed\n");

  while(1);
}
